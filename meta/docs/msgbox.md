# Asset Changes
- Emotes are always 48 wide and placed in the same static spot but I haven't quite figured out where that is yet
- Nameplate itself is slightly taller so all tiles need to be properly replaced
- Priority order (first item in list has lowest priority and therefore appears on top):
    - Emotes
    - Head
    - Phone
    - Nameplate
DONE - Nameplate colors: 
    Boy: 4c88da Main, 445aae Shading
    Girl: fb6657 Main, c93c50 Shading
    NB one: 716b6b Main, 268872 Shading
    Sign: aba9a8 Main, 716b6b Shading

# New Spacing Rules
- If title is longer than name, nameplate width is 2px + title width + 28px
- If title is longer than the title, nameplate width is 2px + name width + 33px
- The nameplate box should never be more narrow than the length required to house the game's longest title
- Phone is statically placed on the 2nd to last column of msgbox
- Face is always placed in the same locationin relationship to the box
- Emotes are always placed in the same spot on the nameplate (last 48 px? unsure)
- Top of emote sprite should perfectly line up with top of nameplate

# Plan

- Fix phone placement to be in the correct place
- Fix emote placement
- Fix tail placement
- Follow all new rules one at a time
- Set up cursed testing script
