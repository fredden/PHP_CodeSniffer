<?php
namespace Vendor\Package;

use FooClass;

namespace Vendor\Package;
use BarClass as Bar;

namespace Vendor\Package;


    use BarClass as Bar;

namespace Vendor
\Package;

namespace Vendor\
Package;
namespace Vendor\

Package;
namespace Vendor\Package;

$call = namespace\function_name();
echo namespace\CONSTANT_NAME;
// Something which is not a blank line.

namespace Vendor\Package; $var = true;
namespace Vendor\Package; // comment
namespace Vendor\Package; /* comment */
namespace Vendor\Package; ?> inline HTML <?php
namespace Vendor\Package;use Throwable; class Thing {}
namespace Vendor\Package;class Thing {}
namespace Vendor\Package;/* comment */
namespace Vendor\Package;?> inline HTML

The blank line before this text is intentional.
<?php echo __FILE__;
namespace Vendor\Package
; $var = true;
namespace Vendor\Package; ?>
The lack of blank line here is not auto-fixable.
<?php
// This should be the last test in the file. It shouldn't raise any errors.
namespace Vendor\Package; ?>
