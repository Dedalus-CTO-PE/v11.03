create table patwssaf
(
wssdate     char(6),
wssward     char(3),
wssspec     char(3),
wssadmn     decimal(6,0),
wsstrin     decimal(6,0),
wssdocs     decimal(6,0),
wssbday     decimal(8,0),
wssdsch     decimal(6,0),
wsstout     decimal(6,0),
wssspar     char(26),
lf          char(1)
);
create unique index patwssa1 on patwssaf
(
wssdate,
wssward,
wssspec
);
revoke all on patwssaf from public ; 
grant select on patwssaf to public ; 
