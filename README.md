# Pokémon Silicon

This repository contains the source code for Pokémon Silicon. Pokémon Silicon is a game designed to be played on the Gameboy Advance and is a modification of Pokémon Emerald.

## Contributing to Pokémon Silicon
These instructions assume you're using Linux or WSL.

1. Make a [fork on Github](https://github.com/PokemonSanFran/silicon/fork)
2. Download a local copy of the fork. Replace `YOUR_USERNAME` with the owner of the fork you just created, and `silicon` if the changed the name of the fork in the last step.
```console
git clone --recursive https://github.com/YOUR_USERNAME/silicon.git
```
3. [Install go](https://go.dev/doc/install). go is required for building poryscript. Because poryscript is a submodule, using a pre-built binary won't work.
4. Change into the newly cloned directory and attempt to build the game.
```console
cd silicon ; git checkout main ; make clean ; make -j
```
5. Start development from `main`. Replace `newBranch` with the name of the feature you're working on.
```console
git switch -c newBranch
```
6. Once your feature is ready to be merged, we will merge it into `main`.
## Playing Pokémon Silicon
Pokémon Silicon is not ready to be played. There are no plans for a beta, playtest or preview. We ask that you do not build and distribute the game or a patch.

## Using Assets from Pokémon Silicon
Do not use code, assets, or concepts from this repository without explicit permission from pkmnsnfrn.

## Disclaimer
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
