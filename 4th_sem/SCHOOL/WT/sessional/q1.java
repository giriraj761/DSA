class Modular {
    int mod = 0;

    Modular(int mod) {
        this.mod = mod;
    }

    ModInt reduceMod(int n) {
        return new ModInt(n, mod);
    }
}

class ModInt {
    int val, mod;

    ModInt(int val, int mod) {
        this.val = val % mod;
        this.mod = mod;
    }

    ModInt add(ModInt n) {
        if (mod != n.mod) {
            System.out.println("Incompatible");
            return new ModInt(0, 0);
        } else
            return new ModInt((val + n.val), mod);
    }

    ModInt subtract(ModInt n) {
        if (mod != n.mod) {
            System.out.println("Incompatible");
            return new ModInt(0, 0);
        } else
            return new ModInt((val - n.val), mod);
    }

    ModInt mult(ModInt n) {
        if (mod != n.mod) {
            System.out.println("Incompatible");
            return new ModInt(0, 0);
        } else
            return new ModInt((val * n.val), mod);
    }

    ModInt divide(ModInt n) {
        if (mod != n.mod) {
            System.out.println("Incompatible");
            return new ModInt(0, 0);
        } else
            return new ModInt((val % n.val), mod);
    }
}

class q1 {
    public static void main(String[] args) {
        Modular m = new Modular(7);//number system <7
        ModInt a = m.reduceMod(10);//3
        ModInt b = m.reduceMod(13);//6
        ModInt resa = a.add(b);
        System.out.println(resa.val);
        ModInt ress = a.subtract(b);
        System.out.println(ress.val);
        ModInt resm = a.mult(b);
        System.out.println(resm.val);
        ModInt res = a.divide(b);//
        System.out.println(res.val);
    }
}