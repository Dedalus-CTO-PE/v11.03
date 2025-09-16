create table mltcfnaf
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
create unique index mltcfna1 on mltcfnaf
(
mlcfhosp,
mlcfclmc,
mlcfcntr,
mlcfproc,
mlcfstyp,
mlcfsdat,
mlcfhcpc
);
create unique index mltcfna2 on mltcfnaf
(
mlcfhcpc,
mlcfhosp,
mlcfclmc,
mlcfcntr,
mlcfproc,
mlcfstyp,
mlcfsdat
);
revoke all on mltcfnaf from public ; 
grant select on mltcfnaf to public ; 
