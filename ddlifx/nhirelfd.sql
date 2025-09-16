create table nhirelaf
(
nhrercd     char(2),
nhredes     char(25),
nhrespa     char(20),
lf          char(1)
);
create unique index nhirela1 on nhirelaf
(
nhrercd
);
revoke all on nhirelaf from public ; 
grant select on nhirelaf to public ; 
