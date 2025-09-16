create table outhisaf
(
othiurno    char(8),
othievnt    char(8),
othiedat    char(8),
dothiucn    char(4),
othiprio    char(3),
othirank    decimal(6,0),
othispar    char(45),
lf          char(1)
);
create unique index outhisa1 on outhisaf
(
othiurno,
othievnt,
othiedat,
dothiucn
);
revoke all on outhisaf from public ; 
grant select on outhisaf to public ; 
