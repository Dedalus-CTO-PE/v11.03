create table pathgrpf
(
pthgcode    char(6),
pthgdesc    char(50),
pthgdfic    char(6),
pthgspar    char(37),
lf          char(1)
);
create unique index pathgrp1 on pathgrpf
(
pthgcode
);
revoke all on pathgrpf from public ; 
grant select on pathgrpf to public ; 
