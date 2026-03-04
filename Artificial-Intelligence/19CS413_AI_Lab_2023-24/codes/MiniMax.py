import math


# MiniMax function
def minimax(depth, nodeIndex, isMax, scores, height):
    # If we reach the leaf node, return the score
    if depth == height:
        return scores[nodeIndex]

    if isMax:
        return max(
            minimax(depth + 1, nodeIndex * 2, False, scores, height),
            minimax(depth + 1, nodeIndex * 2 + 1, False, scores, height),
        )
    else:
        return min(
            minimax(depth + 1, nodeIndex * 2, True, scores, height),
            minimax(depth + 1, nodeIndex * 2 + 1, True, scores, height),
        )


# Driver code
if __name__ == "__main__":
    # Specify the score value of leaf nodes
    scores = [3, 5, 2, 9, 12, 5, 23, 23]

    # Find depth of the tree
    tree_depth = math.log2(len(scores))

    # Call minimax function
    optimal_value = minimax(0, 0, True, scores, tree_depth)

    print("The optimal value for MAX player is:", optimal_value)
