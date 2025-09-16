create table rcpdepaf
(
rcdprecp    char(12),
drcdpcnt    char(3),
rcdpadmn    char(8),
rcdpscan    decimal(2,0),
rcdpdept    char(3),
rcdppayt    decimal(1,0),
drcdpamn    decimal(14,2),
rcdpdraw    char(20),
rcdpcbnk    char(30),
rcdpcbrn    char(30),
rcdpprac    char(6),
rcdphosp    char(2),
rcdpsyst    char(2),
rcdpmhos    char(3),
rcdpspar    char(34),
lf          char(1)
);
create unique index rcpdepa1 on rcpdepaf
(
rcdprecp,
drcdpcnt
);
create unique index rcpdepa2 on rcpdepaf
(
rcdpdept,
rcdprecp,
drcdpcnt
);
create unique index rcpdepa3 on rcpdepaf
(
rcdpadmn,
rcdprecp,
drcdpcnt
);
revoke all on rcpdepaf from public ; 
grant select on rcpdepaf to public ; 
