create table outsipaf
(
otspsite    char(6),
otspxc01    char(2),
otspxc02    char(2),
otspxc03    char(2),
otspxc04    char(2),
otspxc05    char(2),
otspxc06    char(2),
otspxc07    char(2),
otspxc08    char(2),
otspxc09    char(2),
otspxc10    char(2),
otspxc11    char(2),
otspxc12    char(2),
otspxc13    char(2),
otspxc14    char(2),
otspxc15    char(2),
otspxc16    char(2),
otspxc17    char(2),
otspxc18    char(2),
otspxc19    char(2),
otspxc20    char(2),
otspspar    char(40),
lf          char(1)
);
create unique index outsipa1 on outsipaf
(
otspsite
);
revoke all on outsipaf from public ; 
grant select on outsipaf to public ; 
