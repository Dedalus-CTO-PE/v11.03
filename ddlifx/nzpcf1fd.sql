create table nzpcf1af
(
nzcfhosp    char(3),
nzcfclmc    char(3),
nzcfcntr    char(6),
nzcfcprc    char(9),
nzcfstyp    char(1),
nzcfsdat    char(8),
nzcfedat    char(8),
nzcfbdet    decimal(1,0),
nzcfhnam    char(35),
nzcfhad1    char(35),
nzcfhad2    char(35),
nzcfhad3    char(35),
nzcfhad4    char(35),
nzcfspri    decimal(5,2),
nzcfdpri    decimal(5,2),
nzcfrpro    char(1),
nzcfrefn    char(15),
nzcfvnid    char(15),
nzcfelos    decimal(4,0),
nzcfdocs    char(1),
nzcfcdat    char(8),
nzcfctim    char(8),
nzcfcuid    char(10),
nzcfudat    char(8),
nzcfutim    char(8),
nzcfuuid    char(10),
nzcfspar    char(80),
lf          char(1)
);
create unique index nzpcfn11 on nzpcf1af
(
nzcfhosp,
nzcfclmc,
nzcfcntr,
nzcfcprc,
nzcfstyp,
nzcfsdat
);
revoke all on nzpcf1af from public ; 
grant select on nzpcf1af to public ; 
