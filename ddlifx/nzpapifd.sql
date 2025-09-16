create table nzpapiaf
(
nzaprpis    char(8),
nzapstat    char(1),
nzaprinv    char(20),
nzaprdat    char(8),
nzapramt    decimal(14,2),
nzaprgst    decimal(14,2),
nzaprpin    char(50),
nzapadmn    char(8),
nzapurno    char(8),
nzapsnam    char(20),
nzapgnam    char(25),
nzapcntr    char(6),
nzapcnam    char(40),
nzaphsno    char(2),
nzaporgn    char(5),
nzaphnam    char(50),
nzapinvn    char(8),
nzapsrid    char(11),
nzapapdt    char(8),
nzapacod    char(5),
nzapgsta    char(5),
nzapspar    char(100),
lf          char(1)
);
create unique index nzpapia1 on nzpapiaf
(
nzaprpis
);
create unique index nzpapia2 on nzpapiaf
(
nzapstat,
nzaprpis
);
revoke all on nzpapiaf from public ; 
grant select on nzpapiaf to public ; 
