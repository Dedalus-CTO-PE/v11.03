create table pati10df
(
dpcode      char(9),
ddesc       char(70),
dflag       char(1),
dagegp      char(1),
dlow        decimal(2,0),
dhigh       decimal(2,0),
pt0d2agp    char(1),
pt0d2all    decimal(2,0),
pt0d2ahl    decimal(2,0),
dsex        char(1),
pt0dadtp    char(1),
pt0dsacd    char(9),
ddagger     char(1),
darea       char(1),
pt0dcpra    char(1),
pt0dacrq    char(1),
pt0dmi9c    char(9),
dpt0dcmf    char(2),
dpt0dv1c    char(1),
dpt0dv2c    char(1),
pt0dv1mp    char(9),
dpt0dv3c    char(1),
pt0dv2mp    char(9),
pt0dspar    char(12),
lf          char(1)
);
create unique index pati10d1 on pati10df
(
dpcode
);
create unique index pati10d2 on pati10df
(
ddesc,
dpcode
);
revoke all on pati10df from public ; 
grant select on pati10df to public ; 
