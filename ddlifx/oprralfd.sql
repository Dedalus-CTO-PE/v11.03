create table oprralaf
(
oprldate    char(8),
oprlstor    char(5),
oprlsuor    char(6),
oprlstnw    char(5),
oprlsunw    char(6),
oprlovst    char(5),
oprloven    char(5),
oprlcuid    char(10),
oprlcdat    char(8),
oprlctim    char(8),
oprlspar    char(30),
lf          char(1)
);
create unique index oprrala1 on oprralaf
(
oprldate,
oprlstor,
oprlsuor,
oprlstnw,
oprlsunw
);
create unique index oprrala2 on oprralaf
(
oprldate,
oprlstnw,
oprlsunw,
oprlstor,
oprlsuor
);
revoke all on oprralaf from public ; 
grant select on oprralaf to public ; 
