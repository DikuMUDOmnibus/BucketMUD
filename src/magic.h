/* spells used in Merc */
#ifndef _SPELL_H_
#define _SPELL_H_

struct char_data;

#define DECLARE_SPELL_FUN( fun )        SPELL_FUN fun
typedef void SPELL_FUN(int sn, int level, struct char_data *ch, void *vo);

/*
 * Spell functions.
 * Defined in magic.c.
 */
DECLARE_SPELL_FUN(spell_null);
DECLARE_SPELL_FUN(spell_acid_blast);
DECLARE_SPELL_FUN(spell_armor);
DECLARE_SPELL_FUN(spell_bless);
DECLARE_SPELL_FUN(spell_blindness);
DECLARE_SPELL_FUN(spell_burning_hands);
DECLARE_SPELL_FUN(spell_call_lightning);
DECLARE_SPELL_FUN(spell_calm);
DECLARE_SPELL_FUN(spell_cancellation);
DECLARE_SPELL_FUN(spell_cause_critical);
DECLARE_SPELL_FUN(spell_cause_light);
DECLARE_SPELL_FUN(spell_cause_serious);
DECLARE_SPELL_FUN(spell_change_sex);
DECLARE_SPELL_FUN(spell_chain_lightning);
DECLARE_SPELL_FUN(spell_charm_person);
DECLARE_SPELL_FUN(spell_chill_touch);
DECLARE_SPELL_FUN(spell_colour_spray);
DECLARE_SPELL_FUN(spell_continual_light);
DECLARE_SPELL_FUN(spell_control_weather);
DECLARE_SPELL_FUN(spell_create_food);
DECLARE_SPELL_FUN(spell_create_spring);
DECLARE_SPELL_FUN(spell_create_water);
DECLARE_SPELL_FUN(spell_cure_blindness);
DECLARE_SPELL_FUN(spell_cure_critical);
DECLARE_SPELL_FUN(spell_cure_disease);
DECLARE_SPELL_FUN(spell_cure_light);
DECLARE_SPELL_FUN(spell_cure_poison);
DECLARE_SPELL_FUN(spell_cure_serious);
DECLARE_SPELL_FUN(spell_curse);
DECLARE_SPELL_FUN(spell_demonfire);
DECLARE_SPELL_FUN(spell_detect_evil);
DECLARE_SPELL_FUN(spell_detect_hidden);
DECLARE_SPELL_FUN(spell_detect_invis);
DECLARE_SPELL_FUN(spell_detect_magic);
DECLARE_SPELL_FUN(spell_detect_poison);
DECLARE_SPELL_FUN(spell_dispel_evil);
DECLARE_SPELL_FUN(spell_dispel_magic);
DECLARE_SPELL_FUN(spell_earthquake);
DECLARE_SPELL_FUN(spell_enchant_armor);
DECLARE_SPELL_FUN(spell_enchant_weapon);
DECLARE_SPELL_FUN(spell_energy_drain);
DECLARE_SPELL_FUN(spell_faerie_fire);
DECLARE_SPELL_FUN(spell_faerie_fog);
DECLARE_SPELL_FUN(spell_fireball);
DECLARE_SPELL_FUN(spell_flamestrike);
DECLARE_SPELL_FUN(spell_fly);
DECLARE_SPELL_FUN(spell_frenzy);
DECLARE_SPELL_FUN(spell_gate);
DECLARE_SPELL_FUN(spell_giant_strength);
DECLARE_SPELL_FUN(spell_harm);
DECLARE_SPELL_FUN(spell_haste);
DECLARE_SPELL_FUN(spell_heal);
DECLARE_SPELL_FUN(spell_holy_word);
DECLARE_SPELL_FUN(spell_identify);
DECLARE_SPELL_FUN(spell_infravision);
DECLARE_SPELL_FUN(spell_invis);
DECLARE_SPELL_FUN(spell_know_alignment);
DECLARE_SPELL_FUN(spell_lightning_bolt);
DECLARE_SPELL_FUN(spell_locate_object);
DECLARE_SPELL_FUN(spell_magic_missile);
DECLARE_SPELL_FUN(spell_mass_healing);
DECLARE_SPELL_FUN(spell_mass_invis);
DECLARE_SPELL_FUN(spell_nexus);
DECLARE_SPELL_FUN(spell_pass_door);
DECLARE_SPELL_FUN(spell_plague);
DECLARE_SPELL_FUN(spell_poison);
DECLARE_SPELL_FUN(spell_protection);
DECLARE_SPELL_FUN(spell_refresh);
DECLARE_SPELL_FUN(spell_remove_curse);
DECLARE_SPELL_FUN(spell_sanctuary);
DECLARE_SPELL_FUN(spell_shocking_grasp);
DECLARE_SPELL_FUN(spell_shield);
DECLARE_SPELL_FUN(spell_sleep);
DECLARE_SPELL_FUN(spell_stone_skin);
DECLARE_SPELL_FUN(spell_summon);
DECLARE_SPELL_FUN(spell_teleport);
DECLARE_SPELL_FUN(spell_ventriloquate);
DECLARE_SPELL_FUN(spell_weaken);
DECLARE_SPELL_FUN(spell_word_of_recall);
DECLARE_SPELL_FUN(spell_acid_breath);
DECLARE_SPELL_FUN(spell_fire_breath);
DECLARE_SPELL_FUN(spell_frost_breath);
DECLARE_SPELL_FUN(spell_gas_breath);
DECLARE_SPELL_FUN(spell_lightning_breath);
DECLARE_SPELL_FUN(spell_general_purpose);
DECLARE_SPELL_FUN(spell_high_explosive);
DECLARE_SPELL_FUN(spell_firewind);
DECLARE_SPELL_FUN(spell_meteor_swarm);
DECLARE_SPELL_FUN(spell_multi_missile);
DECLARE_SPELL_FUN(spell_disintegrate);
DECLARE_SPELL_FUN(spell_ice_ray);
DECLARE_SPELL_FUN(spell_holyfire);
DECLARE_SPELL_FUN(spell_ice_storm);
DECLARE_SPELL_FUN(spell_vision);
DECLARE_SPELL_FUN(spell_restoration);
DECLARE_SPELL_FUN(spell_regeneration);
DECLARE_SPELL_FUN(spell_test_area);
DECLARE_SPELL_FUN(spell_web);
DECLARE_SPELL_FUN(spell_imprint);
DECLARE_SPELL_FUN(spell_life_drain);
DECLARE_SPELL_FUN(spell_energize);
DECLARE_SPELL_FUN(spell_remove_align);
DECLARE_SPELL_FUN(spell_knock);
#endif
