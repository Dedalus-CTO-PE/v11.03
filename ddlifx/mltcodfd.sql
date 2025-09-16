create table mltcodaf
(
mlcohosp    char(3),
mlcotcod    char(2),
mlcoacod    char(3),
mlcospar    char(50),
lf          char(1)
);
create unique index mltcoda1 on mltcodaf
(
mlcohosp,
mlcotcod,
mlcoacod
);
create unique index mltcoda2 on mltcodaf
(
mlcotcod,
mlcoacod,
mlcohosp
);
revoke all on mltcodaf from public ; 
grant select on mltcodaf to public ; 
