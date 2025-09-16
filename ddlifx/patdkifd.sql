create table patdkiaf
(
ptdkdoc     char(6),
ptdkkwd     char(15),
ptdkspa     char(10),
lf          char(1)
);
create unique index patdkia1 on patdkiaf
(
ptdkdoc,
ptdkkwd
);
create unique index patdkia2 on patdkiaf
(
ptdkkwd,
ptdkdoc
);
revoke all on patdkiaf from public ; 
grant select on patdkiaf to public ; 
