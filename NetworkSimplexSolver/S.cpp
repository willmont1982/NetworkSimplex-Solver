
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

	static cost_t Solve(pint_t n, const std::vector<Arc>& arcs);
private:
	static bool SanityCheck(pint_t n, const std::vector<Arc>& arcs);
};
