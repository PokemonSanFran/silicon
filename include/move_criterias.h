#ifndef GUARD_MOVE_CRITERIAS_H
#define GUARD_MOVE_CRITERIAS_H

union MoveCriteriaGoal
{
    u32 value;
    struct PACKED {
        u16 id;
        u16 state;
    } quest;
};

typedef bool32 (*MoveCriteriaFunc)(enum Move);

bool32 MoveCriteria_ByNothing(enum Move);
bool32 MoveCriteria_ByQuestId(enum Move);

#endif // GUARD_MOVE_CRITERIAS_H
