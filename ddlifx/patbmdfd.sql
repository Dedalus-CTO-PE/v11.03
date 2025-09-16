create table patbmdaf
(
ptbdward    char(3),
ptbdwbed    char(3),
ptbddate    char(8),
ptbdadtm    char(5),
ptbdlosm    char(5),
ptbdlosd    char(3),
ptbdoppe    char(3),
ptbdadmn    char(8),
ptbdstat    char(1),
ptbdover    char(1),
ptbdbrqn    char(8),
ptbdspar    char(42),
lf          char(1)
);
create unique index patbmda1 on patbmdaf
(
ptbdward,
ptbdwbed,
ptbddate,
ptbdadtm,
ptbdoppe,
ptbdadmn
);
create unique index patbmda2 on patbmdaf
(
ptbdadmn,
ptbddate,
ptbdadtm,
ptbdward,
ptbdwbed,
ptbdoppe
);
create unique index patbmda3 on patbmdaf
(
ptbdward,
ptbdwbed,
ptbdadmn,
ptbddate,
ptbdadtm,
ptbdoppe
);
create unique index patbmda4 on patbmdaf
(
ptbdward,
ptbddate,
ptbdwbed,
ptbdoppe,
ptbdadmn,
ptbdadtm
);
revoke all on patbmdaf from public ; 
grant select on patbmdaf to public ; 
