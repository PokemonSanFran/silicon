// Settings
const opacity = 50;
const targetImage = "map.png";
const shortcut = "Q";

var active = false;
var root = "";

function updateDisplay() {
    overlay.clear();
    if (!active) return;

    let imagePath = root + "/" + targetImage;
    overlay.addImage(0, 0, imagePath, 0, false);
    overlay.setOpacity(opacity);
}

export function onProjectOpened(projectPath) {
    utility.registerToggleAction("toggleMapImage", "Show Reference Map", shortcut, active);
    root = projectPath;
}

export function toggleMapImage() {
    active = !active;
    updateDisplay();
}

export function onMapOpened(mapName) {
    updateDisplay();
}
