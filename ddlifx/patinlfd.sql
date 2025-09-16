create table patinlaf
(
ptilinvn    char(8),
ptiltype    char(1),
ptilgrp     char(3),
ptilcode    char(9),
ptilactl    decimal(14,2),
ptilloss    decimal(14,2),
ptilspar    char(12),
lf          char(1)
);
create unique index patinla1 on patinlaf
(
ptilinvn,
ptiltype,
ptilgrp,
ptilcode
);
revoke all on patinlaf from public ; 
grant select on patinlaf to public ; 
