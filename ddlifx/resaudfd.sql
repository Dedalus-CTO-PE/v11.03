create table resaudaf
(
reaurdt     char(8),
reaurtm     char(5),
reaurun     char(4),
reausdt     char(8),
reaustm     char(5),
reauuid     char(10),
reaumrk     char(1),
reaurst     char(2),
reauacd     char(3),
reauacm     char(50),
reauspa     char(3),
lf          char(1)
);
create unique index resauda1 on resaudaf
(
reaurdt,
reaurtm,
reaurun,
reausdt,
reaustm,
reauuid
);
revoke all on resaudaf from public ; 
grant select on resaudaf to public ; 
