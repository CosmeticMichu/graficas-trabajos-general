// include any needed header

// declare here the Quaternion struct/class

int main(int argc, char **argv)
{
    Quaternion q1{1, 2, 3, 0}, q2{0, 2, -3.4, -1};

    Quaternion q3;
    q3 = q1 + q2;
    q3.print();
    q3 = q1 - q2;
    q3.print();
    q3 = q1 * q2;
    q3.print();

    return 0;
}

// implement here the Quaternion struct/class
