create table pmsptdaf
(
pmpetrdt    char(8),
pmpetrtm    char(8),
pmpevisn    char(8),
pmpetran    char(6),
pmpeitem    char(9),
pmpeurno    char(8),
pmpetrty    char(1),
pmpeides    char(30),
pmpeserv    decimal(5,0),
pmpetdat    char(8),
pmpeamtt    decimal(14,2),
pmpeamtp    decimal(14,2),
pmperbat    decimal(14,2),
pmpegstc    char(6),
pmpegstm    decimal(14,2),
pmpewusr    char(10),
pmpeexfn    char(25),
pmpedtex    char(8),
pmpetmex    char(8),
pmpedtrn    char(6),
pmpespar    char(20),
lf          char(1)
);
create unique index pmsptda1 on pmsptdaf
(
pmpetrdt,
pmpetrtm,
pmpevisn,
pmpetran
);
create unique index pmsptda2 on pmsptdaf
(
pmpevisn,
pmpetrdt,
pmpetrtm,
pmpetran
);
create unique index pmsptda3 on pmsptdaf
(
pmpeurno,
pmpevisn,
pmpetrdt,
pmpetrtm,
pmpetran
);
create unique index pmsptda4 on pmsptdaf
(
pmpevisn,
pmpetran,
pmpetrdt,
pmpetrtm
);
create unique index pmsptda5 on pmsptdaf
(
pmpeexfn,
pmpetrdt,
pmpetrtm,
pmpevisn,
pmpetran
);
revoke all on pmsptdaf from public ; 
grant select on pmsptdaf to public ; 
