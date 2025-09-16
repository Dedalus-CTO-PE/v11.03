create table patperss
(
pecode      char(6),
petype      char(2),
dpepage     char(2),
dpeline     char(2),
pedesc      char(75),
lf          char(1)
);
create unique index patpers1 on patperss
(
pecode,
petype,
dpepage,
dpeline
);
revoke all on patperss from public ; 
grant select on patperss to public ; 
