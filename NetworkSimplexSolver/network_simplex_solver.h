/* Implementação do algoritmo Network Simplex para resolução de sistemas lineares
 * Algoritmo Simplex de Rede para resolução de problemas de Fluxo de Custo Mínimo
 * Problema:
 * Indicar rede G = (N, A)
 * Entrada: c_{i, j} for cost, u_{i, j} for capacity
 * Objetivo: min z(x) = sum_{(i, j) \in A} c_{i,j} \cdot x_{i,j}
 * satisfazendo:
 * 0 \leq x_{i, j} \leq u_{i, j} \forall {i, j} \in A
 * sum_{(i, j) \in A} x_{i, j} - sum_{(k, i) in \A} x_{k, i} = 0
 
 * Observe que, se não houver loop negativo, é possível reduzir o custo máximo-fluxo-mínimo para MCFP:
 * basta adicionar um arco com capacidade infinita e
 * -INF(algum valor grande o suficiente, tome cuidado para não causar estouro) peso
 * em seguida, chame o solver do MCFP, decodifique o fluxo verdadeiro e o custo verdadeiro do custo retornado
 */

#include <vector>

class NetworkSimplexSolver {
public:
	using cap_t = unsigned int; // type of capacity
	using cost_t = long long; // type of cost
	using pint_t = unsigned int; // type of positive integer

	struct Arc {
		pint_t st, ed;
		cap_t capacity;
		cost_t cost_per_unit;
	};

	/* @param n: the number of nodes
	 */

	/* @param n: número de nós na rede
	 * @param arcs: arcos da rede
	 * NOTE: O arco reverso virtual será tratado dentro desta função,
	 * não se preocupe em adicionar ambos os arcos.
	 */
	static cost_t Solve(pint_t n, const std::vector<Arc>& arcs);
private:
	static bool SanityCheck(pint_t n, const std::vector<Arc>& arcs);
};
