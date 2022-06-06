# Network Simplex

Algoritmo Network Simplexp ara o problema de fluxo de custo mínimo

Problema:

Indicação de rede $G = (N, A)$

Entrada: $c_{i, j}$ por custo, $u_{i, j}$ para capacidade

Função objetivo: min $z(x) = sum_{(i, j) \in A} c_{i,j} \cdot x_{i,j}$

Satsifazendo:

$0 \leq x_{i, j} \leq u_{i, j} \forall {i, j} \in A$

$sum_{(i, j) \in A} x_{i, j} - sum_{(k, i) \in A} x_{k, i} = 0$

