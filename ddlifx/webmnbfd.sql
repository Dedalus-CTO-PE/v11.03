create table webmnbaf
(
wbmbmenu    char(8),
wbmbmgrp    char(3),
wbmbdesc    char(35),
wbmbpres    char(1),
wbmbmgrt    char(1),
wbmbspar    char(80),
lf          char(1)
);
create unique index webmnba1 on webmnbaf
(
wbmbmenu,
wbmbmgrp
);
revoke all on webmnbaf from public ; 
grant select on webmnbaf to public ; 
