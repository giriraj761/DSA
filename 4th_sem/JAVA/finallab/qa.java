// package JAVA.finallab;

public class qa{
    public static void main(String[] args) {

        int arr1[] = { 1, 2, 3, 4, 5 };
        int arr2[] = { 1, 2, 3, 4, 5 };
        LinkedList n1 = new LinkedList(arr1);
        LinkedList n2 = new LinkedList(arr2);
        n1.show();
        n1.append(n2);
        n1.show();

        n1.reverse();
        n1.show();
    }
}

class LinkedList {
    Node root;

    LinkedList(int arr[]) {
        root = new Node(arr[0]);
        Node temp = root;
        for (int i = 2; i < arr.length; i++) {
            Node link = new Node(i);
            temp.next = link;
            temp = temp.next;
        }
    }

    void show() {
        Node temp = root;
        while (temp.next != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println(temp.data);
    }

    void append(LinkedList b) {
        Node temp = root;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = b.root;
    }

    void reverse(){
        Node prev = null;
        Node curr = root;

        if(curr == null) {
            System.out.println("Empty linked list");
        }

        while(curr != null){
            Node temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        root=prev;
    }

}

class Node {
    public int data;
    public Node next;

    Node(int data) {
        this.data = data;
    }
}


