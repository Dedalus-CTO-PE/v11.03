create table outuataf
(
dopuaout    char(8),
opuaurno    char(8),
dopuauni    char(3),
opuasite    char(6),
opuaclin    char(6),
opuadate    char(8),
opuastrt    char(5),
opuaslot    decimal(3,0),
opuatime    char(5),
opuactyp    char(6),
opuasrcr    char(3),
opuacomp    char(3),
opuaclas    char(3),
opuainsr    char(3),
opuaattn    char(3),
opuadoct    char(6),
opuapcat    char(3),
opuaprty    char(3),
opuausr1    char(3),
opuausr2    char(3),
opuausr3    char(3),
opuausr4    char(3),
opuaudat    char(8),
opuautim    char(8),
opuatype    decimal(1,0),
opuaspar    char(34),
lf          char(1)
);
create unique index outuata1 on outuataf
(
dopuaout,
opuaurno,
dopuauni
);
revoke all on outuataf from public ; 
grant select on outuataf to public ; 
