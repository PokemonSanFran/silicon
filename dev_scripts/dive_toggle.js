// Settings
const opacity = 50;
const prefix = "Underwater_";
const shortcut = "D";


var active = false;
var curMapName = "";
var root = "";

function updateDisplay() {
    overlay.clear();
    if (!active) return;

    // Porymap's API currently can't read connection names. Predict connected map name.
    let diveMap = curMapName.startsWith(prefix) ? curMapName.slice(prefix.length) : (prefix + curMapName);

    let mapNames = utility.getMapNames();
    if (mapNames.includes(diveMap))
        overlay.addImage(0, 0, root + "/" + diveMap + ".png", 0, false);
    overlay.setOpacity(opacity);
}

export function onProjectOpened(projectPath) {
    utility.registerToggleAction("toggleDisplay", "Show Dive Map", shortcut, active);
    root = projectPath;
}

export function toggleDisplay() {
    active = !active;
    updateDisplay();
}

export function onMapOpened(mapName) {
    curMapName = mapName;
    updateDisplay();
}