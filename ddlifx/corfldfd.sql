create table corfldaf
(
coflfnum    char(5),
coflfdsc    char(50),
coflgrp     char(20),
cofltab     char(8),
coflfld     char(8),
coflfspa    char(19),
lf          char(1)
);
create unique index corflda1 on corfldaf
(
coflfnum
);
revoke all on corfldaf from public ; 
grant select on corfldaf to public ; 
