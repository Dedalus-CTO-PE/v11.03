create table webrspaf
(
wbrsspid    char(8),
wbrsusid    char(10),
wbrsprid    char(8),
wbrsdate    char(8),
wbrstime    char(5),
wbrsdesc    char(35),
wbrsspar    char(80),
lf          char(1)
);
create unique index webrspa1 on webrspaf
(
wbrsspid
);
create unique index webrspa2 on webrspaf
(
wbrsprid,
wbrsspid
);
create unique index webrspa3 on webrspaf
(
wbrsusid,
wbrsprid,
wbrsspid
);
revoke all on webrspaf from public ; 
grant select on webrspaf to public ; 
