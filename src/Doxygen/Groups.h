/**
 * @defgroup    MIDIOutputElements MIDI Output Elements
 * @brief   All Elements that send out MIDI events.  
 *          This includes potentiometers, faders, buttons, rotary encoders, 
 *          program selectors.
 */

/**
 * @ingroup MIDIOutputElements
 * @defgroup    BankableMIDIOutputElements Bankable MIDI Output Elements
 * @brief   All Elements that send out MIDI events, and that can be banked.  
 *          This includes the bankable versions of pretty much all elements in
 *          @ref MIDIOutputElements.
 */

/**
 * @ingroup MIDIOutputElements
 * @defgroup    ManyAddressesMIDIOutputElements Many Addresses MIDI Output Elements
 * @brief   All Elements that send out MIDI events, and that can banked, with
 *          a list of arbitrary addresses.  
 *          This includes the bankable versions of pretty much all elements in
 *          @ref MIDIOutputElements.
 */

/**
 * @defgroup    MIDIInputElements   MIDI Input Elements
 * @brief   All Elements that listen for incoming MIDI events.  
 *          This includes LEDs, VU meters, V-Pot LED rings, time displays ...
 */


/**
 * @ingroup     MIDIInputElements
 * @defgroup    BankableMIDIInputElements   Bankable MIDI Input Elements
 * @brief   All Elements that listen for incoming MIDI events, and that can be
 *          banked.  
 *          This includes the bankable versions of pretty much all elements in
 *          @ref MIDIInputElements.
 */

/**
 * @ingroup MIDIInputElements
 * @defgroup    midi-input-elements-leds    MIDI Input Elements LEDs
 * @brief   All MIDIInputElements that visualize their state using LEDs.
 */

/**
 * @defgroup    Selectors   Selectors
 * @brief   Selectors are elements that change the bank setting or any other 
 *          selection, such as program selectors.
 */

/**
 * @defgroup    Audio Teensy Audio
 * @brief   All Elements that interact with Audio streams.
 */

/** 
 * @defgroup    MIDIInterfaces MIDI Interfaces
 * @brief   All MIDI Interfaces that can send and receive MIDI events.
 */

/**
 * @defgroup    ExtIO Extended Input/Output
 * @brief   All Elements that extend the number of IO pins of the Arduino: 
 *          Currently only shift registers and multiplexers.
 */

/**
 * @defgroup    HardwareUtils   Hardware Utilities
 * @brief   Classes used for debouncing buttons, incrementing/decrementing
 *          push buttons, scanning switch matrices, filtering analog input, etc.
 */

/** 
 * @defgroup    DisplayElements Display Elements
 * @brief   All Elements that can be used to show the state of the Control 
 *          Surface on the display.
 */

/** 
 * @defgroup    ControlSurfaceModule Control Surface
 * @brief   The main class that initializes, manages and updates all other
 *          elements.
 */

/**
 * @defgroup    Utilities Utilities
 * @brief   All kinds of utility and helper classes that are used throughout the
 *          library, such as containers and filters.
 */

/** 
 * @ingroup Utilities
 * @defgroup    Containers Containers
 * @brief   Containers like Array, BitArray and DoublyLinkedList.
 */