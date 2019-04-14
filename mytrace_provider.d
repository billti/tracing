provider mytrace {
    probe before_enter();
    probe after_enter(int);
};