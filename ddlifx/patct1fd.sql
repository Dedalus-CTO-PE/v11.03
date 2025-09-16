create table patct1cf
(
ctcpost     char(8),
ctccode     char(3),
ctclga      char(4),
ctcspar     char(16),
lf          char(1)
);
create unique index patct1c1 on patct1cf
(
ctcpost
);
create unique index patct1c2 on patct1cf
(
ctccode,
ctcpost
);
create unique index patct1c3 on patct1cf
(
ctclga,
ctcpost
);
revoke all on patct1cf from public ; 
grant select on patct1cf to public ; 
