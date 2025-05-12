graph TD
id1[Interact_Script]
id1 -->|If Quest Complete| D[PostQuest_Script]
id1 -->|If Quest Reward| E[PlayerHasXXX_Script]
id1 -->|If Quest Active| F[DuringQuest_Script]
id1 -->|If Quest Inactive| G[PreQuest_Script]
G ==> H{{Make Quest Active}}
F ==> I{{Check If Has Thing}}
I ==>|If Has| J{{Make Quest Reward}}
J ==> O{{Take Thing}}
I ==>|If Does Not Have| K[DuringQuest2_Script]
O ==> E
E --> L[CheckPlayerBag_Script]
L -->|If Has Space| M[PlayerBagHasSpace_Script]
L -->|If No Space| N[PlayerBagFull_Script]
