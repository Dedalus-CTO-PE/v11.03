create table webgrpaf
(
wbgrgrpc    char(10),
wbgrdesc    char(50),
wbgrsurl    char(70),
wbgractv    char(1),
wbgrcdat    char(8),
wbgrctim    char(8),
wbgrcuid    char(10),
wbgrudat    char(8),
wbgrutim    char(8),
wbgruuid    char(10),
wbgrspar    char(25),
lf          char(1)
);
create unique index webgrpa1 on webgrpaf
(
wbgrgrpc
);
create unique index webgrpa2 on webgrpaf
(
wbgrdesc,
wbgrgrpc
);
revoke all on webgrpaf from public ; 
grant select on webgrpaf to public ; 
