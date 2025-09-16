create table pmshkiaf
(
pmhkhcpc    char(10),
pmhkkkwd    char(15),
pmhkspar    char(10),
lf          char(1)
);
create unique index pmshkia1 on pmshkiaf
(
pmhkhcpc,
pmhkkkwd
);
create unique index pmshkia2 on pmshkiaf
(
pmhkkkwd,
pmhkhcpc
);
revoke all on pmshkiaf from public ; 
grant select on pmshkiaf to public ; 
