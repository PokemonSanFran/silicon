```c
void profile_start()
{
    REG_TM2CNT_L = 0;
    REG_TM3CNT_L = 0;
    REG_TM2CNT_H = 0;
    REG_TM3CNT_H = 0;
    REG_TM3CNT_H = TIMER_ENABLE | 0x4;
    REG_TM2CNT_H = TIMER_ENABLE;
}

// put at the begnning of the thing you wanna measure

u64 profile_stop()
{
   REG_TM2CNT_H = 0;
   return (REG_TM3CNT_L<<16)|REG_TM2CNT_L;
}
```

Use these, combined with DebugPrintf("frames: %d",profile_stop()) to measure the length in frames somethign took to run
