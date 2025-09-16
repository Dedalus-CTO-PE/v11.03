create table resctaaf
(
rectlab     char(3),
rectseg     char(3),
rectfld     char(2),
rectsys     char(12),
rectcod     char(12),
rectdes     char(50),
rectslv     char(2),
rectspa     char(58),
lf          char(1)
);
create unique index resctaa1 on resctaaf
(
rectlab,
rectseg,
rectfld,
rectsys,
rectcod
);
revoke all on resctaaf from public ; 
grant select on resctaaf to public ; 
