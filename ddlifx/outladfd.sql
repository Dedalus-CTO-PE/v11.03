create table outladaf
(
otlaseid    char(4),
otlapcls    char(1),
otlaoutn    char(8),
otlaattd    char(20),
otlaatdt    char(20),
otlaattm    char(8),
otlabdat    char(20),
otlactry    char(20),
otlactyp    char(30),
otlacomp    char(20),
otlatday    char(20),
otlaname    char(50),
otlainsr    char(20),
otlapcat    char(20),
otlaclss    char(20),
otlaprty    char(20),
otlapsex    char(6),
otlasref    char(20),
otlaurno    char(8),
otlasite    char(30),
otlabkdt    char(20),
otlabtim    char(8),
otlaslot    char(3),
otlastim    char(8),
otlaclid    char(6),
otlacldx    char(30),
otladtit    char(9),
otladsnm    char(20),
otladgnm    char(25),
otladoct    char(6),
otlasitc    char(6),
otlaclty    char(6),
otladate    char(8),
otlastrt    char(5),
otlarshf    char(1),
otladlst    char(1),
otlaspar    char(49),
lf          char(1)
);
create unique index outlada1 on outladaf
(
otlaseid,
otlapcls,
otlaoutn,
otlaclid,
otlaclty
);
revoke all on outladaf from public ; 
grant select on outladaf to public ; 
