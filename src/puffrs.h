// Copyright 2015 John T. Foster

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//    http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef PUFFRS_H_
#define PUFFRS_H_

#include <Teuchos_Comm.hpp>
#include <Teuchos_ParameterList.hpp>

#include "puffrs_discretization.h"

namespace puffrs {

class Puffrs {
   public:
    Puffrs(const Teuchos::RCP<const Teuchos::Comm<int> >& kComm,
           Teuchos::RCP<Teuchos::ParameterList> parameters,
           Teuchos::RCP<puffrs::Discretization> puffrs_discretization);

    virtual ~Puffrs() {}

   private:
    Teuchos::RCP<Teuchos::ParameterList> parameters_;
};
}

#endif
