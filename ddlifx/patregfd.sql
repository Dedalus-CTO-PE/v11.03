create table patregaf
(
dptrgadm    char(8),
dptrgcan    char(8),
ptrgadte    char(8),
ptrgddte    char(8),
ptrgprim    char(9),
ptrghist    char(9),
ptrglat     char(3),
ptrgstag    char(50),
ptrginv1    char(3),
ptrginv2    char(3),
ptrginv3    char(3),
ptrginv4    char(3),
ptrginv5    char(3),
ptrginv6    char(3),
ptrginv7    char(3),
ptrgread    decimal(1,0),
ptrgspar    char(50),
lf          char(1)
);
create unique index patrega1 on patregaf
(
dptrgadm,
dptrgcan
);
revoke all on patregaf from public ; 
grant select on patregaf to public ; 
