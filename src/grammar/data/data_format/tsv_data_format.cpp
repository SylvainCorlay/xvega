// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/data/data_format/tsv_data_format.hpp"
#include "../data_format_private.hpp"

namespace xv
{
    tsv_data_format::tsv_data_format()
    {
        type = "tsv";
    }

    void to_json(nl::json& j, const tsv_data_format& c)
    {
        private_to_json(c, j);
    }
}