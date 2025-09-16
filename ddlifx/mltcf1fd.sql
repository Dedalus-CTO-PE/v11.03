create table mltcf1af
(
mlcfhosp    char(3),
mlcfclmc    char(3),
mlcfcntr    char(6),
mlcfproc    char(9),
mlcfstyp    char(1),
mlcfsdat    char(8),
mlcfhcpc    char(10),
mlcfspar    char(60),
lf          char(1)
);
create unique index mltcfn11 on mltcf1af
(
mlcfhosp,
mlcfclmc,
mlcfcntr,
mlcfproc,
mlcfstyp,
mlcfsdat,
mlcfhcpc
);
create unique index mltcfn12 on mltcf1af
(
mlcfhcpc,
mlcfhosp,
mlcfclmc,
mlcfcntr,
mlcfproc,
mlcfstyp,
mlcfsdat
);
revoke all on mltcf1af from public ; 
grant select on mltcf1af to public ; 
