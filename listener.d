mytrace*:::before_enter
{
    printf("Entering the app\n");
}

mytrace*:::after_enter
{
    printf("Key entered %d\n", arg0);
}
