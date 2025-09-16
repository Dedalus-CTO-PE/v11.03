create table outpreaf
(
doproutn    char(8),
oprsite     char(6),
oprclin     char(6),
oprdate     char(8),
oprstrt     char(5),
doprslot    char(3),
oprtime     char(5),
oprctyp     char(6),
oprspar     char(16),
lf          char(1)
);
create unique index outprea1 on outpreaf
(
doproutn
);
revoke all on outpreaf from public ; 
grant select on outpreaf to public ; 
