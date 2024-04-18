// 1. Write a Java program to append the specified element to the end of a linked list.

// 2. Write a Java program to iterate through all elements in a linked list.

// 3. Write a Java program to iterate through all elements in a linked list starting at the specified position.

// 4. Write a Java program to iterate a linked list in reverse order.

// 5. Write a Java program to insert the specified element at the specified position in the linked list.

// 6. Write a Java program to insert elements into the linked list at the first and last position.

// 7. Write a Java program to insert the specified element at the front of a linked list.

// 8. Write a Java program to insert the specified element at the end of a linked list.

// 9. Write a Java program to insert some elements at the specified position into a linked list.

// 10. Write a Java program to get the first and last occurrence of the specified elements in a linked list.

// 11. Write a Java program to display the elements and their positions in a linked list.

// 12. Write a Java program to remove a specified element from a linked list.

// 13. Write a Java program to remove first and last element from a linked list.

// 14. Write a Java program to remove all the elements from a linked list.

// 15. Write a Java program of swap two elements in a linked list.

// 16. Write a Java program to shuffle the elements in a linked list.

// 17. Write a Java program to join two linked lists.

// 18. Write a Java program to clone an linked list to another linked list.

// 19. Write a Java program to remove and return the first element of a linked list.

// 20. Write a Java program to retrieve but does not remove, the first element of a linked list.

// 21. Write a Java program to retrieve but does not remove, the last element of a linked list.

// 22. Write a Java program to check if a particular element exists in a linked list.

// 23. Write a Java program to convert a linked list to array list.

// 24. Write a Java program to compare two linked lists.

// 25. Write a Java program to test an linked list is empty or not.

// 26. Write a Java program to replace an element in a linked list.

// 27. Write a Java program to create a new priority queue, add some colors (string) and print out the elements of the priority queue.

// 28. Write a Java program to iterate through all elements in priority queue.

// 29. Write a Java program to add all the elements of a priority queue to another priority queue.

// 30. Write a Java program to insert a given element into a priority queue.

// 31. Write a Java program to remove all the elements from a priority queue.

// 32. Write a Java program to count the number of elements in a priority queue.

// 33. Write a Java program to compare two priority queues.

// 34. Write a Java program to retrieve the first element of the priority queue.

// 35. Write a Java program to retrieve and remove the first element.

// 36. Write a Java program to convert a priority queue to an array containing all of the elements of the queue.

// 37. Write a Java program to convert a Priority Queue elements to a string representation.

// 38. Write a Java program to change priorityQueue to maximum priorityqueue.

// 39. Write a Java program to copy all of the mappings from the specified map to another map.

// 40. Write a Java program to remove all of the mappings from a map.

import java.io.*;
import java.util.*;

import java.lang.Math;

public class q1to40 {

    public static void main(String[] args) {

        int n = 10;

        LinkedList<Integer> arrli = new LinkedList<Integer>();
        LinkedList<Integer> arr2 = new LinkedList<Integer>();
        LinkedList<Integer> arr3 = new LinkedList<Integer>();

        for (int i = 1; i <= n; i++) {
            arrli.add((int) Math.pow(i, i));
        }
        for (int i = 1; i <= n; i++) {
            arr2.add(i);
        }

        // add at specific loc q1
        arrli.add(0, 100);

        System.out.println(arrli);

        arrli.remove(3);
        arrli.remove(arrli.size() - 1);

        // remove specific
        arrli.remove(1);

        // remove first
        arrli.remove(0);

        // remove end
        arrli.remove(arrli.size() - 1);

        // iterate through all the elements q2
        for (int i = 0; i < arrli.size(); i++) {
            System.out.print(arrli.get(i) + " ");
        }

        // int n;
        // Scanner sc = new Scanner(System.in);

        // // iterate through specific pos q3
        // for (int i = n; i < arrli.size(); i++) {
        //     System.out.print(arrli.get(i) + " ");
        // }

        System.out.println();
        System.out.println(arrli);

        // getindex of
        System.out.println(arrli.indexOf(256));

        // swap
        Collections.swap(arrli, 1, 2);
        System.out.println(arrli);

        // shuffle
        Collections.shuffle(arrli);
        System.out.println(arrli);

        // merge
        arr2.addAll(arrli);
        System.err.println("\n\n" + arr2);

        // clone
        arr3 = (LinkedList) arr2.clone();
        System.out.println(arr3);

        // only getting the first and last
        System.err.println(arrli.get(0) + " " + arrli.get(arrli.size() - 1));

        // returning and removing first element
        int x = arrli.removeFirst();
        System.out.println(x);
        System.out.println(arrli);

        // check for contains
        System.out.println(arrli.contains(256));

        boolean flag=true;
        //comparing two lists
        for (Integer s : arr2) { // q24
            if (arr3.contains(s) == false) {
                flag = false;
                break;
            }
        }
        if(flag){System.out.println("same");}
        else{System.out.println("notsame");}

        // converting linkedlist to arraylist
        List<Integer> arrnew = new ArrayList<Integer>(arrli);
        System.out.println(arrnew);

        // check for empty
        System.out.println(arrli.isEmpty());

        // replace
        arrli.set(0, 999);
        System.out.println(arrli);

        arrli.removeAll(arrli);
        System.out.println(arrli);
        // System.out.println(arrli.getFirst()+" "+arrli.getLast());

        // priority queue
        PriorityQueue<String> pq = new PriorityQueue<String>();
        PriorityQueue<String> pqnew = new PriorityQueue<String>();
        pq.add("Red");
        pq.add("Green");
        pq.add("Orange");
        pq.add("White");
        pq.add("Black");
        System.out.println(pq);

        pqnew.add("unicorn");
        pqnew.add("breserk");

        // copy one priority queue to new
        pq.addAll(pqnew);
        System.out.println(pq);

        // remove all element form priority queue
        pqnew.removeAll(pqnew);
        System.out.println(pqnew);

        // getting the first element
        System.out.println(pq.peek());

        // get first element by return
        System.out.println(pq.poll());
        System.out.println(pq);

        boolean flag1=true;
        //comparing Two priority queue
        for (String s : pq) { // q24
            if (pqnew.contains(s) == false) {
                flag1 = false;
                break;
            }
        }
        if(flag1){System.out.println("same");}
        else{System.out.println("notsame");}

        // converting to arraylist
        List<String> al = new ArrayList<String>(pq);
        System.out.println(al);

        // converitng to string
        String str;
        str = pq.toString();
        System.out.println(str);

        // reversing the priority
        PriorityQueue<String> revpq = new PriorityQueue<>(10, Collections.reverseOrder());
        revpq.add("Red");
        revpq.add("Green");
        revpq.add("Orange");
        revpq.add("White");
        revpq.add("Black");
        System.out.println(revpq);

        //sizeof priority queue
        System.out.println(pq.size());

        // hashmap
        HashMap<Integer, String> hp = new HashMap<Integer, String>();
        hp.put(1, "Red");
        hp.put(2, "Green");
        hp.put(3, "Black");
        hp.put(4, "White");
        hp.put(5, "Blue");

        for (Map.Entry itr : hp.entrySet()) {
            System.out.println(itr.getKey() + " " + itr.getValue());
        }

        //clear all the elements of hashtable
        hp.clear();
        System.out.println(hp);

    }
}
