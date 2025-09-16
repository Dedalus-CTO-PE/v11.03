create table tmpaliaf
(
tmalurno    char(8),
tmallin     char(3),
tmalsur     char(25),
tmalgv1     char(20),
tmalgv2     char(20),
tmalgv3     char(20),
tmalpre     char(1),
tmalspa     char(20),
lf          char(1)
);
create unique index tmpalia1 on tmpaliaf
(
tmalurno,
tmallin
);
revoke all on tmpaliaf from public ; 
grant select on tmpaliaf to public ; 
