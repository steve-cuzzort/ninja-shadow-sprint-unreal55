export PROJECT_NAME=$(ls | grep ".uproject" | sed s/.uproject//)
export UNREAL_ENGINE_VERSION="UE_5.5"
export ANDROID_KEY="../signing-key/SigningKey.keystore"
export APPLE_SIGNING_TEAM=$(cat ../signing-key/ios-key.txt)
export BRANCH_TO_PULL="master"

export BUILD_NUMBER=$(git rev-list --count HEAD)
export VERSION_NUMBER=$(awk -F= '/HumanReadableVersionNumber/{print $NF}' Config/Game.ini)
export BRANCH_NAME=$(git branch --show-current)

echo "BUILD_NUMBER = $BUILD_NUMBER"
echo "BRANCH_NAME = $BRANCH_NAME"

export BUILD_SAVE_LOCATION="$HOME/OneDrive - Vita Robur Fedilis/GameBinaries/$PROJECT_NAME/$BRANCH_NAME/$VERSION_NUMBER.$BUILD_NUMBER"
echo "Build save location: $BUILD_SAVE_LOCATION"