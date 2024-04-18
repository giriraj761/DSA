interface Motor {
    int capacity = 1000;

    public void run();

    public void consume();
}

class washingMachine implements Motor {
    public void run() {
        System.out.println("Machine running");
    }

    public void consume() {
        System.out.println("Consuming power");
    }
}

class q2 {
    public static void main(String[] args) {
        washingMachine wmch = new washingMachine();
        wmch.consume();
        wmch.run();
        System.out.println("Power Capacity : " + wmch.capacity + "W");
    }
}
