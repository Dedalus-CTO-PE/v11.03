create table residtaf
(
reidrtyp    char(3),
reidiord    char(3),
reiditem    char(12),
reidides    char(50),
reidrity    char(1),
reidrran    char(1),
reidrrty    char(1),
reidlrrm    decimal(5,2),
reidhrrm    decimal(5,2),
reidlrrf    decimal(5,2),
reidhrrf    decimal(5,2),
reidrrde    char(25),
reidumea    char(10),
reidwebc    char(10),
reiddatc    char(8),
reidtimc    char(8),
reidwebu    char(10),
reiddatu    char(8),
reidtimu    char(8),
reidspar    char(50),
lf          char(1)
);
create unique index residta1 on residtaf
(
reidrtyp,
reidiord
);
create unique index residta2 on residtaf
(
reiditem,
reidrtyp,
reidiord
);
create unique index residta3 on residtaf
(
reidides,
reidrtyp,
reidiord
);
revoke all on residtaf from public ; 
grant select on residtaf to public ; 
